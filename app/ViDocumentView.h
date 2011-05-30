#import "ViTextView.h"
#import "ViDocument.h"
#import "ViDocumentTabController.h"

// XXX: actually a view _controller_
@interface ViDocumentView : NSObject <ViViewController>
{
	IBOutlet NSView *view;
	IBOutlet NSView *innerView;
	IBOutlet NSScrollView *scrollView;
	ViDocument *document;
	ViDocumentTabController *tabController;
	NSWindow *window;
}

@property(readonly) ViDocument *document;
@property(readonly) NSView *view;
@property(readonly) NSView *innerView;
@property(readwrite, assign) ViDocumentTabController *tabController;

- (ViDocumentView *)initWithDocument:(ViDocument *)aDocument;
- (ViTextView *)textView;
- (void)replaceTextView:(ViTextView *)newTextView;
- (NSString *)title;

@end
