/* FUN_2c57761c @ 0x2c57761c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57761c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 8));
  FUN_2c603a04(uVar1,0,_DAT_2c5777a8);
  FUN_2c607048(uVar1,0x2064,0x27d1);
  uVar2 = FUN_2c637344(uVar1);
  FUN_2c603a04(uVar2,0,_DAT_2c5777a8);
  FUN_2c607048(uVar2,0x27d1,0x18);
  FUN_2c638730(uVar2,*(undefined4 *)(param_2 + 4));
  FUN_2c606e20(uVar2,0xff00ff00,0);
  FUN_2c606e2c(uVar2,0x99,0);
  uVar3 = FUN_2c5e2e80(_LAB_2c5777ac);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c606e5c(uVar2,2,0);
  uVar2 = FUN_2c606a10(uVar1);
  FUN_2c603a04(uVar2,0,_DAT_2c5777a8);
  FUN_2c606ff8(uVar2,0x22);
  FUN_2c607048(uVar2,0x21c,0x27d1);
  FUN_2c627e28(uVar2,4);
  FUN_2c606d48(uVar2,0xc,0);
  FUN_2c606d54(uVar2,0xc,0);
  uVar1 = _DAT_2c5777a8;
  puVar6 = *(undefined4 **)(param_2 + 0x20);
  for (puVar5 = *(undefined4 **)(param_2 + 0x1c); puVar5 != puVar6; puVar5 = puVar5 + 6) {
    uVar3 = FUN_2c606a10(uVar2);
    FUN_2c603a04(uVar3,0,uVar1);
    FUN_2c607048(uVar3,0x7d,0x28);
    FUN_2c606d60(uVar3,0xff000000,0);
    FUN_2c606d6c(uVar3,0xff,0);
    FUN_2c606d9c(uVar3,1,0);
    FUN_2c606e68(uVar3,0xc,0);
    FUN_2c606d90(uVar3,0x66,0);
    FUN_2c606d84(uVar3,0xff00ff00,0);
    uVar3 = FUN_2c637344(uVar3);
    FUN_2c603a04(uVar3,0,uVar1);
    FUN_2c607048(uVar3,0x2064,0x27d1);
    FUN_2c606e20(uVar3,0xff00ff00,0);
    FUN_2c606e2c(uVar3,0xff,0);
    uVar4 = FUN_2c5e2e80(_LAB_2c5777ac);
    FUN_2c606e38(uVar3,uVar4,0);
    FUN_2c606e5c(uVar3,2,0);
    FUN_2c638730(uVar3,*puVar5);
    FUN_2c6072bc(uVar3,9,0);
  }
  return;
}

