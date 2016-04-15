//
//  main.m
//  homework2
//
//  Created by Michael Weyman on 9/17/13.
//  Copyright (c) 2013 Michael Weyman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"

// PRoblem 1 part a
int lookUP(NSArray *names, NSString *name){
    for(int i = 0; i < 5; i++){
        if ([names[i] caseInsensitiveCompare:name] == NSOrderedSame) {
            return 1;
        }
    }
    return 0;
}
//problem 1 part b
void lookUP2(NSMutableArray *names, NSString *name){
    NSArray *result;
    for(int i = 0; i < 5; i++){
        if ([names[i] caseInsensitiveCompare:name] == NSOrderedSame) {
            [result addObject:names[i]];
        }
    }
    for(int j = 0; j < 5; j++){
        NSLog(@"[%@]", result[j]); }
    return;
}

//problem 2
Fraction sum(NSArray *fract){
	Fraction *sum = new Fraction;
	for(int i = 0; i < 2; i++){
		sum += fract[i];
	}
	return fract;
}

//problem 3
void freq(NSArray *num){
	NSArray *val = [[NSArray  alloc] initWithObjects: 1, 2, 3, 4, 5, 6, 7, 8, 9, nil];
	NSArray *frequency = [10];
	for(int j = 0; j < 10; j++{
		for(int i = 0; i < 7; i++){
			if(val[j] == num[i])
				frequency[j] += 1;
		}
	}
}

int main(int argc, const char * argv[])
{
	//problem 1
    NSArray *names = [[NSArray  alloc] initWithObjects:@"Julia", @"Tony", @"Stephen", @"Jamie", @"Stella", nil];
    NSString *name = @"Tony";
    int result = lookUP(names, name);
    NSLog (@"The result is: %d", result);
    NSMutableArray * mNames = [[NSMutableArray array] initWithObjects:@"Julia", @"Tony", @"Stephen", @"Jamie", @"Stella", nil];
    NSString *look = @"St";
    lookUP2( mNames , look);
	//problem 2
    NSArray *fraction = [[NSArray  alloc] initWithObjects: 1/9, 1 1/8, 1 , nil];
	Fraction *value = new Fraction;
	value = sum(fraction);
	NSLog (@"The result is: %@", value);
	//problem 3
	NSArray *numbers = [[NSArray  alloc] initWithObjects: 3, 4, 6, 6, 4, 9, 4, nil];
	freq(numbers);
	return 0;
}





