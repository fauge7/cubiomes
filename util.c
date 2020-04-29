#include "util.h"
#include "layers.h"

#include <stdio.h>
#include <string.h>

void setBiomeColour(unsigned char biomeColour[256][3], int biome,
        unsigned char r, unsigned char g, unsigned char b)
{
    biomeColour[biome][0] = r;
    biomeColour[biome][1] = g;
    biomeColour[biome][2] = b;
}

void initBiomeColours(unsigned char biomeColours[256][3])
{
    // This colouring scheme is taken from the AMIDST program:
    // https://github.com/toolbox4minecraft/amidst
    // https://sourceforge.net/projects/amidst.mirror/

    memset(biomeColours, 0, 256*3);

    setBiomeColour(biomeColours, ocean, 0, 0, 112);
    setBiomeColour(biomeColours, plains,141, 179, 96);
    setBiomeColour(biomeColours, desert, 250, 148, 24);
    setBiomeColour(biomeColours, mountains, 96, 96, 96);
    setBiomeColour(biomeColours, forest, 5, 102, 33);
    setBiomeColour(biomeColours, taiga, 11, 102, 89);
    setBiomeColour(biomeColours, swamp, 7, 249, 178);
    setBiomeColour(biomeColours, river, 0, 0, 255);
    setBiomeColour(biomeColours, hell, 255, 0, 0);
    setBiomeColour(biomeColours, sky, 128, 128, 255);
    setBiomeColour(biomeColours, frozen_ocean, 112, 112, 214);
    setBiomeColour(biomeColours, frozen_river, 160, 160, 255);
    setBiomeColour(biomeColours, snowy_tundra, 255, 255, 255);
    setBiomeColour(biomeColours, snowy_mountains, 160, 160, 160);
    setBiomeColour(biomeColours, mushroom_fields, 255, 0, 255);
    setBiomeColour(biomeColours, mushroom_field_shore, 160, 0, 255);
    setBiomeColour(biomeColours, beach, 250, 222, 85);
    setBiomeColour(biomeColours, desert_hills, 210, 95, 18);
    setBiomeColour(biomeColours, wooded_hills, 34, 85, 28);
    setBiomeColour(biomeColours, taiga_hills, 22, 57, 51);
    setBiomeColour(biomeColours, mountain_edge, 114, 120, 154);
    setBiomeColour(biomeColours, jungle, 83, 123, 9);
    setBiomeColour(biomeColours, jungle_hills, 44, 66, 5);
    setBiomeColour(biomeColours, jungleEdge, 98, 139, 23);
    setBiomeColour(biomeColours, deep_ocean, 0, 0, 48);
    setBiomeColour(biomeColours, stone_shore, 162, 162, 132);
    setBiomeColour(biomeColours, snowy_beach, 250, 240, 192);
    setBiomeColour(biomeColours, birch_forest, 48, 116, 68);
    setBiomeColour(biomeColours, birch_forest_hills, 31, 95, 50);
    setBiomeColour(biomeColours, dark_forest, 64, 81, 26);
    setBiomeColour(biomeColours, snowy_taiga, 49, 85, 74);
    setBiomeColour(biomeColours, snowy_taiga_hills, 36, 63, 54);
    setBiomeColour(biomeColours, giant_tree_taiga, 89, 102, 81);
    setBiomeColour(biomeColours, giant_tree_taiga_hills, 69, 79, 62);
    setBiomeColour(biomeColours, wooded_mountains, 80, 112, 80);
    setBiomeColour(biomeColours, savanna, 189, 178, 95);
    setBiomeColour(biomeColours, savanna_plateau, 167, 157, 100);
    setBiomeColour(biomeColours, badlands, 217, 69, 21);
    setBiomeColour(biomeColours, wooded_badlands_plateau, 176, 151, 101);
    setBiomeColour(biomeColours, badlands_plateau, 202, 140, 101);

    setBiomeColour(biomeColours, warm_ocean, 0, 0, 172);
    setBiomeColour(biomeColours, lukewarm_ocean, 0, 0, 144);
    setBiomeColour(biomeColours, cold_ocean, 32, 32, 112);
    setBiomeColour(biomeColours, deep_warm_ocean, 0, 0, 80);
    setBiomeColour(biomeColours, deep_lukewarm_ocean, 0, 0, 64);
    setBiomeColour(biomeColours, deep_cold_ocean, 32, 32, 56);
    setBiomeColour(biomeColours, deep_frozen_ocean, 64, 64, 144);

    setBiomeColour(biomeColours, ocean+128, 0, 0, 112);
    setBiomeColour(biomeColours, plains+128, 141, 179, 96);
    setBiomeColour(biomeColours, desert+128, 250, 148, 24);
    setBiomeColour(biomeColours, mountains+128, 96, 96, 96);
    setBiomeColour(biomeColours, forest+128, 5, 102, 33);
    setBiomeColour(biomeColours, taiga+128, 11, 102, 89);
    setBiomeColour(biomeColours, swamp+128, 7, 249, 178);
    setBiomeColour(biomeColours, river+128, 0, 0, 255);
    setBiomeColour(biomeColours, hell+128, 255, 0, 0);
    setBiomeColour(biomeColours, sky+128, 128, 128, 255);
    setBiomeColour(biomeColours, frozen_ocean+128, 144, 144, 160);
    setBiomeColour(biomeColours, frozen_river+128, 160, 160, 255);
    setBiomeColour(biomeColours, snowy_tundra+128, 140, 180, 180);
    setBiomeColour(biomeColours, snowy_mountains+128, 160, 160, 160);
    setBiomeColour(biomeColours, mushroom_fields+128, 255, 0, 255);
    setBiomeColour(biomeColours, mushroom_field_shore+128, 160, 0, 255);
    setBiomeColour(biomeColours, beach+128, 250, 222, 85);
    setBiomeColour(biomeColours, desert_hills+128, 210, 95, 18);
    setBiomeColour(biomeColours, wooded_hills+128, 34, 85, 28);
    setBiomeColour(biomeColours, taiga_hills+128, 22, 57, 51);
    setBiomeColour(biomeColours, mountain_edge+128, 114, 120, 154);
    setBiomeColour(biomeColours, jungle+128, 83, 123, 9);
    setBiomeColour(biomeColours, jungle_hills+128, 44, 66, 5);
    setBiomeColour(biomeColours, jungleEdge+128, 98, 139, 23);
    setBiomeColour(biomeColours, deep_ocean+128, 0, 0, 48);
    setBiomeColour(biomeColours, stone_shore+128, 162, 162, 132);
    setBiomeColour(biomeColours, snowy_beach+128, 250, 240, 192);
    setBiomeColour(biomeColours, birch_forest+128, 48, 116, 68);
    setBiomeColour(biomeColours, birch_forest_hills+128, 31, 95, 50);
    setBiomeColour(biomeColours, dark_forest+128, 64, 81, 26);
    setBiomeColour(biomeColours, snowy_taiga+128, 49, 85, 74);
    setBiomeColour(biomeColours, snowy_taiga_hills+128, 36, 63, 54);
    setBiomeColour(biomeColours, giant_tree_taiga+128, 89, 102, 81);
    setBiomeColour(biomeColours, giant_tree_taiga_hills+128, 69, 79, 62);
    setBiomeColour(biomeColours, wooded_mountains+128, 80, 112, 80);
    setBiomeColour(biomeColours, savanna+128, 189, 178, 95);
    setBiomeColour(biomeColours, savanna_plateau+128, 167, 157, 100);
    setBiomeColour(biomeColours, badlands+128, 217, 69, 21);
    setBiomeColour(biomeColours, wooded_badlands_plateau+128, 176, 151, 101);
    setBiomeColour(biomeColours, badlands_plateau+128, 202, 140, 101);

    setBiomeColour(biomeColours, bamboo_jungle, 118, 142, 20);
    setBiomeColour(biomeColours, bamboo_jungle_hills, 59, 71, 10);
}

void initBiomeTypeColours(unsigned char biomeColours[256][3])
{
    memset(biomeColours, 0, 256*3);

    setBiomeColour(biomeColours, Oceanic,  0x00, 0x00, 0xa0);
    setBiomeColour(biomeColours, Warm,     0xff, 0xc0, 0x00);
    setBiomeColour(biomeColours, Lush,     0x00, 0xa0, 0x00);
    setBiomeColour(biomeColours, Cold,     0x60, 0x60, 0x60);
    setBiomeColour(biomeColours, Freezing, 0xff, 0xff, 0xff);
}


int biomesToImage(unsigned char *pixels, 
        const unsigned char biomeColours[256][3], const int *biomes, 
        const unsigned int sx, const unsigned int sy, 
        const unsigned int pixscale, const int flip)
{
    unsigned int i, j;
    int containsInvalidBiomes = 0;

    for (j = 0; j < sy; j++)
    {
        for (i = 0; i < sx; i++)
        {
            int id = biomes[j*sx+i]; //if (id != swamp) id = 100;
            unsigned int r, g, b;

            if (id < 0 || id >= 256)
            {
                // This may happen for some intermediate layers
                containsInvalidBiomes = 1;
                r = biomeColours[id&0x7f][0]-40; r = (r>0xff) ? 0x00 : r&0xff;
                g = biomeColours[id&0x7f][1]-40; g = (g>0xff) ? 0x00 : g&0xff;
                b = biomeColours[id&0x7f][2]-40; b = (b>0xff) ? 0x00 : b&0xff;
            }
            else
            {
                if (id < 128) {
                    r = biomeColours[id][0];
                    g = biomeColours[id][1];
                    b = biomeColours[id][2];
                } else {
                    r = biomeColours[id][0]+40; r = (r>0xff) ? 0xff : r&0xff;
                    g = biomeColours[id][1]+40; g = (g>0xff) ? 0xff : g&0xff;
                    b = biomeColours[id][2]+40; b = (b>0xff) ? 0xff : b&0xff;
                }
            }

            unsigned int m, n;
            for (m = 0; m < pixscale; m++) {
                for (n = 0; n < pixscale; n++) {
                    int idx = pixscale * i + n;
                    if (flip) 
                        idx += (sx * pixscale) * ((pixscale * j) + m);
                    else 
                        idx += (sx * pixscale) * ((pixscale * (sy-1-j)) + m);
                    
                    unsigned char *pix = pixels + 3*idx;
                    pix[0] = (unsigned char)r;
                    pix[1] = (unsigned char)g;
                    pix[2] = (unsigned char)b;
                }
            }
        }
    }

    return containsInvalidBiomes;
}

int savePPM(const char *path, const unsigned char *pixels, const unsigned int sx, const unsigned int sy)
{
    FILE *fp = fopen(path, "wb");
    if (!fp)
        return -1;
    fprintf(fp, "P6\n%d %d\n255\n", sx, sy);
    int written = fwrite(pixels, sx*sy, 3, fp);
    fclose(fp);
    return (unsigned int)written != 3*sx*sy;
}
int saveSVG(const char *path, const unsigned char *pixels, const unsigned int sx, const unsigned int sy)
{
	FILE *fp = fopen(path, "wb");
	
	if (!fp)
		return -1;
	fprintf(fp, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%d\" height=\"%d\">", sx, sy);
	unsigned int i,j;
	
	for (j = 0; j < sy; j++)
	{
		for (i = 0; i < sx; i++)
		{
			const unsigned char *rgb = pixels + (j*sy+i)*3*sizeof(char);
			if (i+1 < sx)
			{
				unsigned int nextDiffPixOffset = 1;
				const unsigned char *rgb2 = pixels + (j*sy+i+nextDiffPixOffset) * 3 * sizeof(char);
				while (rgb[0] == rgb2[0] && rgb[1] == rgb2[1] && rgb[2] == rgb2[2])
				{
					nextDiffPixOffset++;
					rgb2 = pixels + (j*sy+i+nextDiffPixOffset) * 3 * sizeof(char);
				}
				fprintf(fp, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"1\" style=\"fill:rgb(%d,%d,%d)\" />\n", i,j, nextDiffPixOffset, rgb[0], rgb[1], rgb[2]);		
				i = i+nextDiffPixOffset-1;
				continue;
			}
			fprintf(fp, "<rect x=\"%d\" y=\"%d\" width=\"1\" height=\"1\" style=\"fill:rgb(%d,%d,%d)\" />\n", i,j,rgb[0], rgb[1], rgb[2]);
		}
	}
	fprintf(fp, "</svg>");
	fclose(fp);
	return 1;
}

