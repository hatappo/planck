#import <Foundation/Foundation.h>

@class PLKBundledOut;

@interface PLKExecutive : NSObject

-(int)runScripts:(NSArray*)scripts
        srcPaths:(NSArray*)srcPaths
         verbose:(BOOL)verbose
           quiet:(BOOL)quiet
      mainNsName:(NSString*)mainNsName
            repl:(BOOL)repl
         outPath:(NSString*)outPath
       cachePath:(NSString*)cachePath
    dumbTerminal:(BOOL)dumbTerminal
           theme:(NSString*)theme
      socketAddr:(NSString*)socketAddr
      socketPort:(int)socketPort
       staticFns:(BOOL)staticFns
    elideAsserts:(BOOL)elideAsserts
            args:(NSArray*)args
planckVersion:(NSString*)planckVersion
   bundledOut:(PLKBundledOut*)bundledOut;

@end
