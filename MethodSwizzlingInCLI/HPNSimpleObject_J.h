/*
Copyright 2019 happn

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

@import Foundation;



NS_ASSUME_NONNULL_BEGIN

@interface HPNSimpleObjectRoot_J : NSObject {
}

- (void)printHello1;
- (void)printHello2;
- (void)printHello3;

@end


@interface HPNSimpleObjectChild1_J : HPNSimpleObjectRoot_J {
}

@end


@interface HPNSimpleObjectChild2_J : HPNSimpleObjectChild1_J {
}

@end


@interface HPNSimpleObjectChild3_J : HPNSimpleObjectChild2_J {
}

@end


void jrSwizzleHello3(void);

NS_ASSUME_NONNULL_END
