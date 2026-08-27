/* FUN_2c4e09bc @ 0x2c4e09bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c4e09bc(int *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = FUN_2c4dffdc();
  if (uVar2 == 0) {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xf7d1,0x27,1);
    FUN_2c4e0504(_LAB_2c4e0a28,0,0,0,_LAB_2c4e0a30,0x27,_LAB_2c4e0a2c,0x1300,_LAB_2c4e0a24);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x55);
    if (bVar1 != 0) {
      FUN_2c4db210(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x28),
                   *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x2c));
      uVar2 = (uint)bVar1;
    }
  }
  return uVar2;
}

