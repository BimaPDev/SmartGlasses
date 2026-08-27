/* FUN_2c65e568 @ 0x2c65e568 */

uint FUN_2c65e568(undefined4 param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_1d [5];
  
  puVar2 = local_1d + 1;
  do {
    puVar2 = puVar2 + -1;
    *puVar2 = *(undefined1 *)(DAT_2c65e5bc + param_3 % 10);
    bVar1 = 9 < param_3;
    param_3 = param_3 / 10;
  } while (bVar1);
  uVar3 = (int)(local_1d + 1) - (int)puVar2;
  if (param_2 < uVar3) {
    uVar3 = 0xffffffff;
  }
  else {
    FUN_2c674668(param_1,local_1d + (1 - uVar3),uVar3);
  }
  return uVar3;
}

