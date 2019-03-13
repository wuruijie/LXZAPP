//
//Created by ESJsonFormatForMac on 18/08/16.
//

#import <Foundation/Foundation.h>

@class HKMyRecruitRecommendData,HKMyRecruitRecommendList;
@interface HKMyRecruitRecommend : NSObject

@property (nonatomic, copy) NSString *msg;

@property (nonatomic, strong) HKMyRecruitRecommendData *data;

@property (nonatomic, assign) NSInteger code;

@end
@interface HKMyRecruitRecommendData : NSObject

@property (nonatomic, assign) NSInteger pageSize;

@property (nonatomic, assign) NSInteger totalRow;

@property (nonatomic, assign) NSInteger pageNumber;

@property (nonatomic, assign) BOOL lastPage;

@property (nonatomic, assign) BOOL firstPage;

@property (nonatomic, strong) NSArray<HKMyRecruitRecommendList *> *list;

@property (nonatomic, assign) NSInteger totalPage;

@end

@interface HKMyRecruitRecommendList : NSObject

@property (nonatomic, copy) NSString *sex;

@property (nonatomic, copy) NSString *corporateName;

@property (nonatomic, copy) NSString *resumeId;

@property (nonatomic, copy) NSString *placeName;

@property (nonatomic, copy) NSString *time;

@property (nonatomic, copy) NSString *functions;

@property (nonatomic, copy) NSString *workingLifeName;

@property (nonatomic, copy) NSString *educationName;

@property (nonatomic, copy) NSString *workingLife;

@property (nonatomic, copy) NSString *portrait;

@property (nonatomic, copy) NSString *updateDate;

@property (nonatomic, copy) NSString *functionsName;

@property (nonatomic, copy) NSString *education;

@property (nonatomic, copy) NSString *sexName;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *place;

@end

