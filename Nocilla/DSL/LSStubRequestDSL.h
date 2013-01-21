#import <Foundation/Foundation.h>

@class LSStubRequestDSL;
@class LSStubResponseDSL;
@class LSStubRequest;

typedef LSStubRequestDSL *(^WithHeaderMethod)(NSString *, NSString *);
typedef LSStubRequestDSL *(^WithHeadersMethod)(NSDictionary *);
typedef LSStubRequestDSL *(^AndBodyMethod)(NSString *);
typedef LSStubRequestDSL *(^AndBodyDataMethod)(NSData *);
typedef LSStubResponseDSL *(^AndReturnMethod)(NSInteger);

@interface LSStubRequestDSL : NSObject
- (id)initWithRequest:(LSStubRequest *)request;
- (WithHeaderMethod)withHeader;
- (WithHeadersMethod)withHeaders;
- (AndBodyMethod)withBody;
- (AndBodyDataMethod)withDataBody;
- (AndReturnMethod)andReturn;
@end

LSStubRequestDSL * stubRequest(NSString *method, NSString *url);