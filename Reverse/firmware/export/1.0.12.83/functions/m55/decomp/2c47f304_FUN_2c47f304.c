/* FUN_2c47f304 @ 0x2c47f304 */

void FUN_2c47f304(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar6 = (byte *)(param_1 + 0xf0);
  if (param_3 != (byte *)0x0) {
    pbVar7 = (byte *)(param_2 + 0xf);
    pbVar8 = pbVar6;
    do {
      pbVar4 = pbVar7 + -0x10;
      pbVar6 = pbVar7 + -0xf;
      pbVar8 = pbVar8 + -1;
      do {
        pbVar4 = pbVar4 + 1;
        pbVar8 = pbVar8 + 1;
        bVar1 = *pbVar8;
        *pbVar4 = *pbVar4 ^ bVar1;
      } while (pbVar4 != pbVar7);
      pbVar7 = pbVar7 + 0x10;
      FUN_2c47f118(pbVar6,param_1,bVar1,pbVar4,param_4);
      pbVar8 = pbVar6;
    } while (pbVar7 + (-0xf - param_2) < param_3);
  }
  uVar2 = *(undefined4 *)(pbVar6 + 4);
  uVar3 = *(undefined4 *)(pbVar6 + 8);
  uVar5 = *(undefined4 *)(pbVar6 + 0xc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)pbVar6;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  *(undefined4 *)(param_1 + 0xfc) = uVar5;
  return;
}

