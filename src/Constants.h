//  Spider
//  Constants.h
//
//  Created by Daryl Dudey on 02/06/2007.
//  Copyright Daryl Dudey 2007 . All rights reserved.

#pragma mark Animation
#define cAnimationCycle					60
#define cAnimationConnectionSpeed		4
#define cArrowSize						3.5

#pragma mark Component Visuals
#define cBodyBorder						2.5
#define cBorderWidth					2.0
#define cConnectionInitialSpace			2
#define cConnectionHeight				14
#define cConnectionStalkSize			4
#define cConnectionSize					8
#define cConnectionThickess				2.5
#define cComponentSpacingLR				15
#define cCornerRadius					5
#define cSelectedAlpha					1.0
#define cSelectionBoxBorder				1
#define cShadowOffset					2.5
#define cSmallCornerRadius				2.5
#define cStaticViewSpacingV				7
#define cStaticViewSpacingH				14
#define cTitleHeight					17
#define cUnSelectedAlpha				0.75

#pragma mark Component Size
#define cConditionalWidth				60
#define cDefaultWidth					140
#define cProgramFlowRadius				16
#define cLiteralQuickbarWidthShort		20

#pragma mark Picking
#define cMatchDistance					10

#pragma mark Canvas
#define cCanvasDefaultWidth				10000
#define cCanvasDefaultHeight			1000
#define cCanvasMinimumScale				0.25
#define cCanvasMaximumScale				2

#pragma mark Component Connections
#define cAllowedFlow					1
#define cAllowedBoolean					2
#define cAllowedByte					4
#define cAllowedDateTime				8
#define cAllowedInteger					16
#define cAllowedReal					32
#define cAllowedString					64

#pragma mark Component Groups
enum {
	cComponentGroup_Literal,
	cComponentGroup_ProgramFlow,
	cComponentGroup_Conditional
};
	
#pragma mark Component Styles
enum {
	cComponentStyle_Normal,
	cComponentStyle_Literal,
	cComponentStyle_ProgramFlow,
	cComponentStyle_Conditional
};

#pragma mark Preferences
enum {
	cPreferencesComponentDropLeft = 0,
	cPreferencesComponentDropCentre,
	cPreferencesComponentDropRight
};

enum {
	cPreferencesCopyConnectionsAlways = 0,
	cPreferencesCopyConnectionsNever,
	cPreferencesCopyConnectionsAsk
};