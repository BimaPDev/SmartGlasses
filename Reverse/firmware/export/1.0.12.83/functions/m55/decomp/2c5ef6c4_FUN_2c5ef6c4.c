/* FUN_2c5ef6c4 @ 0x2c5ef6c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ef6c4(undefined4 *param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    if (param_2 != (code *)0x0) {
      (*param_2)(0,param_3);
      return 1;
    }
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 3) == '\0') {
      *param_1 = param_2;
      param_1[1] = param_3;
      *(undefined1 *)(param_1 + 3) = 2;
      if (param_1[2] == 0) {
        FUN_2c62a470();
        FUN_2c5fee80();
        uVar1 = FUN_2c606a10();
        FUN_2c603a04(uVar1,0,_DAT_2c5ef82c);
        FUN_2c607048(uVar1,0x2064);
        FUN_2c606d60(uVar1,0xff000000,0);
        FUN_2c606d6c(uVar1,0xff,0);
        FUN_2c606e68(uVar1,10,0);
        uVar2 = FUN_2c6313f4(uVar1);
        FUN_2c607048(uVar2,0x78);
        uVar3 = FUN_2c5e2e4c(_LAB_2c5ef830);
        FUN_2c63140c(uVar2,uVar3);
        FUN_2c6072bc(uVar2,2,0,0x50);
        uVar2 = FUN_2c637344(uVar1);
        FUN_2c607048(uVar2,0x27d1);
        FUN_2c606e20(uVar2,0xff00ff00,0);
        uVar3 = registry_lookup(_LAB_2c5ef834);
        FUN_2c638730(uVar2,uVar3);
        uVar3 = FUN_2c5e2e58(_LAB_2c5ef838);
        FUN_2c606e38(uVar2,uVar3,0);
        FUN_2c606e5c(uVar2,2,0);
        FUN_2c6072bc(uVar2,2,0,0xd8);
        uVar2 = FUN_2c637344(uVar1);
        FUN_2c607048(uVar2,0x27d1);
        FUN_2c606e20(uVar2,0xff00ff00,0);
        uVar3 = registry_lookup(_LAB_2c5ef83c);
        FUN_2c638730(uVar2,uVar3);
        uVar3 = FUN_2c5e2e58(_LAB_2c5ef840);
        FUN_2c606e38(uVar2,uVar3,0);
        FUN_2c606e5c(uVar2,2,0);
        FUN_2c6072bc(uVar2,2,0,0x10a);
        param_1[2] = uVar1;
      }
      uVar1 = param_1[4];
      FUN_2c62be74();
      FUN_2c62be4c(uVar1);
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

