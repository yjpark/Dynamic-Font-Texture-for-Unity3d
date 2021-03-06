#import <Foundation/Foundation.h>

@interface DFTManager : NSObject

+ (DFTManager*)sharedManager;

- (void) writeOnTexture:(NSString*)text textureID:(int)textureID textureSize:(CGSize)dimensions alignment:(UITextAlignment)alignment lineBreakMode:(UILineBreakMode)lineBreakMode fontName:(NSString*)fontNameString fontSize:(int)fontSize;
-(int) widthWithFont:(NSString*)text fontName:(NSString*)fontName fontSize:(int)fontSize;
- (int) nextPoT:(int)size;

@end
