#pragma once
#include "statika.h"
#include <windows.h>

using namespace statika;

// Function to handle drawing the beam and loads

void DrawInternalMoments(HDC hdc, RECT clientRect, const Beam& beam, StaticEquilibrium& eq);
void DrawBeamAndLoads(HDC hdc, RECT clientRect, const Beam& beam, const Force& force, const UniformLoad& uniformLoad, const Moment& moment);