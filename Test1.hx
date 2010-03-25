package;

import hxGD.Image;
import hxGD.Loader;
import hxGD.Color;
import hxGD.Polygon;
import hxGD.Graphics;
import hxGD.Animation;

class Test1 {

	public function new(i:Int) {
		
		var anim:Animation = new Animation("out"+i+".gif",100,true,true,true);
		
		for (i in 0...20) {
			//var img:Image = Loader.createFromPng("test.png");		
			var img:Image = new Image(100,100);
			img.graphics.color = Color.ofRGB(0xFF0000);
			img.string("/home/hippo/imagetest/google/svn/trunk/fonts/Agency.ttf",42.0,Math.round(img.width/2),Math.round(img.height/2),"i"+i,StringAlign.CenterMiddle);
		//	img.saveImage("image"+i+".gif",FileType.Gif);
			//neko.vm.Gc.run(true);
			anim.addImage(img);
			
		}
		anim.render();
		
		//img.saveImage("test2.png",FileType.Png);
	}
	
	public static function main() {
		for (i in 0...100) {
			new Test1(i);	
			if (i % 10 == 0)
				neko.vm.Gc.run(true);
		}
	}

}
