/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <UIKit/UIKit.h>

/**
 * Distinguishes top-level navigations from sub-frame navigations.
 * shouldStartLoadWithRequest is called for every request, but didStartLoad
 * and didFinishLoad is called only for top-level navigations.
 * Relevant bug: CB-2389
 */
@interface CDVWebViewDelegate : NSObject <UIWebViewDelegate>{
    __weak NSObject <UIWebViewDelegate>* _delegate;
    NSInteger _loadCount;
    NSInteger _state;
    NSInteger _curLoadToken;
    NSInteger _loadStartPollCount;
}

- (id)initWithDelegate:(NSObject <UIWebViewDelegate>*)delegate;
<<<<<<< HEAD
- (BOOL)request:(NSURLRequest*)newRequest isFragmentIdentifierToRequest:(NSURLRequest*)originalRequest;
=======
- (BOOL)request:(NSURLRequest*)newRequest isFragmentIdentifierToRequest:(NSURLRequest*)originalRequest __attribute__((deprecated("Deprecated Since 3.5.0 -Use request:isEqualToRequestAfterStrippingFragments: instead.")));
- (BOOL)request:(NSURLRequest*)newRequest isEqualToRequestAfterStrippingFragments:(NSURLRequest*)originalRequest;
>>>>>>> 1d745dce7cd98402ab804922fac1e4f6ac6186d7

@end
