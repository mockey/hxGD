/*
 *      nGDCopy.h
 *      
 *      Copyright 2010 Philipp Klose <me@thehippo.de>
 *      
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

value CloneImage(value img);
value GetImagePart(value img,value x,value y,value w,value h);
value ImageResize(value img, value w,value h,value resample);
value ImageRotate(value img,value angle);
//value ImageCopyMerge(value img,value attach, value dstX, value dstY, value srcX, value srcY, value w, value h, value pct) {
value ImageCopyMerge(value *args, int nargs);

