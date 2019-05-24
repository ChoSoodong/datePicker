

/**
 时间选择器
 年 月 日 时 分
 默认只能选择当前时间以后的时间
 可以设置分钟的间隔
 
 */





#import <UIKit/UIKit.h>

@protocol SDDatePickerViewDelegate <NSObject>

/**
 保存按钮代理方法
 @param timer 选择的数据
 */
- (void)datePickerViewSaveBtnClickDelegate:(NSString *)timer;
@end

/** 定义回调block */
typedef void(^ResultBlock)(NSString *timer);

@interface SDDatePickerView : UIView

/** 标题 */
@property (copy, nonatomic) NSString *title;

/** 是否自动滑动 默认YES */
@property (assign, nonatomic) BOOL isSlide;

/** 选中的时间， 默认是当前时间 例如:2019-05-24 13:35 */
@property (copy, nonatomic) NSString *date;

/** 分钟间隔 默认1分钟 */
@property (assign, nonatomic) NSInteger minuteInterval;

/** 代理 */
@property (weak, nonatomic) id <SDDatePickerViewDelegate> delegate;
/** block 完成回调 */
@property (nonatomic, copy) ResultBlock completion;


/**
 一句调用, 显示时间选择器,代理方式回调结果

 @param title 标题
 @param delegate 代理
 @return 时间选择器
 */
+(instancetype)showDataPickerViewWithTitle:(NSString *)title delegate:(id <SDDatePickerViewDelegate>)delegate;


/**
 一句调用, 显示时间选择器,block方式回调结果

 @param title 标题
 @param completion 选择完成的回调
 @return 时间选择器
 */
+(instancetype)showDataPickerViewWithTitle:(NSString *)title completion:(ResultBlock)completion;

@end
