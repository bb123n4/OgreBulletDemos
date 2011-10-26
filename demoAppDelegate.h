//
//  demoAppDelegate.h
//  demo
//
//  Created by Ian Baldwin on 26/10/2011.
//  Copyright 2011 Oxford. All rights reserved.
//

#import <Ogre/Ogre.h>
#import <Ogre/OgreOSXCocoaView.h>
#import <Cocoa/Cocoa.h>

@interface demoAppDelegate : NSObject <NSApplicationDelegate> {
	NSWindow *window;
	Ogre::SceneNode *objectNode;
	OgreView *ogreView;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet OgreView *ogreView;

@end