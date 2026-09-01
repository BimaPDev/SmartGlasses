/* FUN_100697ac @ 0x100697ac */

uint FUN_100697ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char local_20;
  char local_1f;
  undefined4 local_1c;
  short local_16;
  int local_14;
  
  FUN_1006970c(0,&local_20,0x10,0,0);
  iVar1 = DAT_10069800;
  if (((local_20 == 'C') || (local_1f == 'D')) && (local_14 == 0)) {
    *(undefined2 *)(DAT_10069800 + 0x24) = 0;
    uVar2 = FUN_1006970c(0x1000,0,local_1c,param_1,param_2);
    if (uVar2 == 0) {
      uVar2 = (uint)(*(short *)(iVar1 + 0x24) == local_16);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

