//
//  MMTabBarView-Private.h
//  MMTabBarView
//
//  Created by Daniel Parnell on 5/11/2013.
//  Copyright (c) 2013 Michael Monscheuer. All rights reserved.
//

#ifndef MMTabBarView_MMTabBarView_Private_h
#define MMTabBarView_MMTabBarView_Private_h

@interface MMTabBarView (/*Private*/)

@property (assign) BOOL isReorderingTabViewItems;

- (void)_commonInit;

// providing defaults
- (BOOL)_supportsOrientation:(MMTabBarOrientation)orientation;
- (CGFloat)_heightOfTabBarButtons;
- (CGFloat)_rightMargin;
- (CGFloat)_leftMargin;
- (CGFloat)_topMargin;
- (CGFloat)_bottomMargin;
- (NSSize)_addTabButtonSize;
- (NSRect)_addTabButtonRect;
- (NSSize)_overflowButtonSize;
- (NSRect)_overflowButtonRect;
- (void)_drawTabBarViewInRect:(NSRect)aRect;
- (void)_drawBezelInRect:(NSRect)rect;
- (void)_drawButtonBezelsInRect:(NSRect)rect;
- (void)_drawBezelOfButton:(MMAttachedTabBarButton *)button atIndex:(NSUInteger)index inButtons:(NSArray *)buttons indexOfSelectedButton:(NSUInteger)selIndex inRect:(NSRect)rect;
- (void)_drawBezelOfOverflowButton:(MMOverflowPopUpButton *)overflowButton inRect:(NSRect)rect;
- (void)_drawInteriorInRect:(NSRect)rect;

// determine positions
- (void)_positionOverflowMenu;
- (void)_positionAddTabButton;
- (void)_checkWindowFrame;

// convenience
- (void)_bindPropertiesOfAttachedButton:(MMAttachedTabBarButton *)aButton andTabViewItem:(NSTabViewItem *)item;
- (void)_unbindPropertiesOfAttachedButton:(MMAttachedTabBarButton *)aButton;

// synchronize selection
- (void)_synchronizeSelection;

// resizing
@property (assign) BOOL isResizing;
- (NSCursor *)_resizingMouseCursor;
- (void)_beginResizingWithMouseDownEvent:(NSEvent *)theEvent;

// misc
- (BOOL)_shouldDisplayTabBar;

// private actions
- (void)_overflowMenuAction:(id)sender;
- (void)_didClickTabButton:(id)sender;
- (void)_didClickCloseButton:(id)sender;

// notification handlers
- (void)frameDidChange:(NSNotification *)notification;
- (void)windowDidMove:(NSNotification *)aNotification;

// update buttons
- (void)_updateAddTabButton;
- (void)_updateOverflowPopUpButton;

@end

#endif
