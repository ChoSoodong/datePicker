# datePicker
年 月 日 时 分 选择器
```
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


```
