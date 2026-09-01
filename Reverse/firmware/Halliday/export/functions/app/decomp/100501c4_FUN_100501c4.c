/* FUN_100501c4 @ 0x100501c4 */

void FUN_100501c4(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *extraout_r2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  pbVar2 = param_1 + param_2;
  iVar4 = *DAT_1005020c;
  uVar1 = 0;
  do {
    uVar7 = CONCAT44(pbVar2,uVar1);
    if (param_1 == pbVar2) {
      if (*DAT_1005020c == iVar4) {
        return;
      }
      uVar7 = FUN_1013cdc0();
      param_1 = extraout_r2;
    }
    pbVar2 = (byte *)((ulonglong)uVar7 >> 0x20);
    iVar6 = 8;
    pbVar3 = param_1 + 1;
    uVar1 = (uint)uVar7 ^ (uint)*param_1;
    do {
      uVar5 = uVar1 & 1;
      uVar1 = uVar1 >> 1;
      if (uVar5 != 0) {
        uVar1 = (uVar1 ^ 0xa001) & 0xffff;
      }
      iVar6 = iVar6 + -1;
      param_1 = pbVar3;
    } while (iVar6 != 0);
  } while( true );
}

