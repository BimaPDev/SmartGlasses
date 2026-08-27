/* FUN_2c4dc91c @ 0x2c4dc91c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4dc91c(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _LAB_2c4dc9a8;
  uVar1 = _LAB_2c4dc9a4;
  FUN_2c4e0504(_LAB_2c4dc9ac,7,0,0,_LAB_2c4dc9a8,0x24,_LAB_2c4dc9a4,0x1300,0);
  if (param_1[0x66] == 0) {
    iVar3 = FUN_2c4de67a(*(int *)(*param_1 + -0xc) + (int)param_1,3000);
    param_1[0x66] = iVar3;
    if (iVar3 == 0) {
      FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x242f,0x27,0xffffffff);
      FUN_2c4e0504(_LAB_2c4dc9b4,0,0,0,uVar2,0x27,uVar1,0x1300,_LAB_2c4dc9b0);
      return 0;
    }
    func_0x2c673c18();
  }
  return 1;
}

