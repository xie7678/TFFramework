#import <Foundation/Foundation.h>

@interface NSURL (Category)

-(NSString *)parameterForKey:(NSString *)key;
-(NSDictionary *)parameters;

@end
