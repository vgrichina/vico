#import "ViScope.h"

@interface NSArray (patterns)

- (BOOL)isEqualToPatternArray:(NSArray *)otherArray;
- (BOOL)isEqualToStringArray:(NSArray *)otherArray;
- (BOOL)hasPrefix:(NSArray *)otherArray;

@end

