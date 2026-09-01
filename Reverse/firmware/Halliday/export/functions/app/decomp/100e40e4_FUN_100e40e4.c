/* FUN_100e40e4 @ 0x100e40e4 */

uint FUN_100e40e4(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint3 uVar2;
  uint3 uVar3;
  uint3 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  
  puVar4 = *(uint3 **)(param_2 + 8);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  bVar1 = *(byte *)((int)puVar4 + 5);
  uVar8 = (uint)*puVar4;
  iVar7 = param_1;
  uVar6 = FUN_100cc614();
  uVar5 = (uint)uVar6;
  if ((int)uVar5 < 0) {
    FUN_100c1c90(param_2);
    FUN_100a5b78((DAT_100e4174 - DAT_100e4178) * 0x20 & 0xff00U | 0xa40011,DAT_100e417c,uVar5);
  }
  else {
    uVar5 = uVar8 & 2;
    if ((uVar8 & 2) == 0) {
      if (bVar1 != 0x7c) {
        *(undefined4 *)(param_1 + 100) = DAT_100e4180;
        *(byte *)(param_1 + 0x60) = (byte)uVar3 >> 3;
        *(byte *)(param_1 + 0x61) = bVar1;
        *(byte *)(param_1 + 0x62) = (byte)uVar2 >> 4;
        FUN_1013cbaa(param_1 + 0x68,(int)((ulonglong)uVar6 >> 0x20),3000,0,iVar7,uVar8,param_3);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

