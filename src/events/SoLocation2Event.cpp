/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2005 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Systems in Motion about acquiring
 *  a Coin Professional Edition License.
 *
 *  See <URL:http://www.coin3d.org/> for more information.
 *
 *  Systems in Motion, Postboks 1283, Pirsenteret, 7462 Trondheim, NORWAY.
 *  <URL:http://www.sim.no/>.
 *
\**************************************************************************/

/*!
  \class SoLocation2Event SoLocation2Event.h Inventor/events/SoLocation2Event.h
  \brief The SoLocation2Event class contains information about 2D movement
  events.
  \ingroup events

  Location2 events are generated by devices capable of 2D, e.g. pointer
  devices -- typically computer mice. Instances of this class contains
  information about the position of the pointer on the render area.

  SoLocation2Event does not contain any new information versus its
  superclass, its sole purpose is to make it possible to specify the
  type of the event for event object receivers in the scene graph.

  \sa SoEvent, SoMotion3Event
  \sa SoEventCallback, SoHandleEventAction */

#include <Inventor/events/SoLocation2Event.h>
#include <Inventor/SbName.h>
#include <assert.h>


SO_EVENT_SOURCE(SoLocation2Event);

/*!
  Initialize the type information data.
 */
void
SoLocation2Event::initClass(void)
{
  SO_EVENT_INIT_CLASS(SoLocation2Event, SoEvent);
}

/*!
  Constructor.
*/
SoLocation2Event::SoLocation2Event(void)
{
}

/*!
  Destructor.
 */
SoLocation2Event::~SoLocation2Event()
{
}

