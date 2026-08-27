/* FUN_2c167df4 @ 0x2c167df4 */

undefined8 FUN_2c167df4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  uint unaff_r7;
  
  *(uint *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0xc) = unaff_r5;
  *(uint *)(param_1 + 0x10) = unaff_r7;
  return CONCAT44((int)(char)((int)((int)(param_2 & 0xff) >> (param_1 & 0xff) & 0xffU) >>
                             ((int)(param_2 >> (unaff_r7 & 0xff)) >> (param_1 & 0xff) & 0xffU)),
                  param_1);
}

