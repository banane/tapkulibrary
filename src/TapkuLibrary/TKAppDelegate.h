//
//  TKAppDelegate.h
//  Created by Devin Ross on 1/31/11.
//
/*
 
 tapku.com || http://github.com/devinross/tapkulibrary
 
 Permission is hereby granted, free of charge, to any person
 obtaining a copy of this software and associated documentation
 files (the "Software"), to deal in the Software without
 restriction, including without limitation the rights to use,
 copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following
 conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.
 
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TKWindow;

/** 
 This class allocates a TKWindow instance and provides a convience method for application launching.
 */
@interface TKAppDelegate : NSObject <UIApplicationDelegate> 

// For subclassing, default implentation does nothing.
// These methods are called upon open & closing respectively regardless.
// Good for placing instructions needed regardless of multi-tasking


/** This is a convience method for placing any functionality that might be called upon initial launch of the application and any subsequent relaunch from a background state. Default implementation does nothing.
 @param application The application instance.
 */
- (void) applicationDidStartup:(UIApplication *)application;

@end
