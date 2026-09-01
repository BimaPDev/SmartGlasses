/* FUN_100c1b58 @ 0x100c1b58 */

int FUN_100c1b58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  uint *puVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_10113f68();
  uVar3 = DAT_100c1bc0;
  uVar2 = DAT_100c1bbc;
  uVar1 = DAT_100c1bb8;
  iVar4 = (int)uVar7;
  if (iVar4 != 0) {
    while( true ) {
      puVar6 = (uint *)uVar7;
      if ((*(byte *)((int)puVar6 + 5) & 1) == 0) break;
      uVar7 = FUN_10113f68(param_1,(int)((ulonglong)uVar7 >> 0x20),0,0,param_4);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      *puVar6 = (uint)uVar7;
      if ((uint)uVar7 == 0) {
        FUN_10119dc2(uVar3,uVar2,uVar1,0x1bb,0,uVar5);
        FUN_1011a1f0(uVar1,0x1bb,extraout_r2,extraout_r3);
        uVar5 = extraout_r1;
      }
      *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) & 0xfe;
      uVar7 = CONCAT44(uVar5,*puVar6);
    }
    *puVar6 = *(byte *)((int)puVar6 + 5) & 1;
  }
  return iVar4;
}

