

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Model)


/// 字典转模型
/// @param dic 字典
+(instancetype)withDic:(id)dic;

/// 字典数组转模型数组
/// @param dicArray 字典数组
+(instancetype)withDicArray:(id)dicArray;

/// 模型转字典
/// @param model 模型
-(NSDictionary*)withModel:(id)model;

/// 模型数组转字典数组
/// @param modelArray 模型数组
-(NSArray*)withModelArray:(id)modelArray;

-(NSDictionary*)arrayModel;

@end

NS_ASSUME_NONNULL_END
