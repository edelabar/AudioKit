//
//  AKChorusAudioUnit.h
//  AudioKit
//
//  Created by Shane Dunne
//  Copyright © 2018 Shane Dunne. All rights reserved.
//

#pragma once
#import "AKAudioUnit.h"

@interface AKChorusAudioUnit : AKAudioUnit
@property (nonatomic) float frequency;
@property (nonatomic) float depth;
@property (nonatomic) float dryWetMix;
@property (nonatomic) float feedback;
@end


