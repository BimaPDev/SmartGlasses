/* FUN_2c4e4e98 @ 0x2c4e4e98 */

uint FUN_2c4e4e98(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc) + param_3;
  *(int *)(param_1 + 0xc) = iVar2;
  puVar1 = DAT_2c4e4f30;
  if (*(int *)(param_1 + 0x14) < iVar2) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  iVar2 = 0x80;
  do {
    if (*puVar1 == 0) {
      *puVar1 = param_2;
      puVar1[1] = param_3;
      goto LAB_2c4e4ebc;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  FUN_2c4e0504(DAT_2c4e4f44,5,0,0,DAT_2c4e4f40,0x49,DAT_2c4e4f3c,0x1300,DAT_2c4e4f48,param_1,
               *(undefined4 *)(param_1 + 8),param_2,param_3);
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3;
LAB_2c4e4ebc:
  if ((param_2 & 3) != 0) {
    FUN_2c4dfb10(0x17b6,0x4d,1);
    FUN_2c4e0504(DAT_2c4e4f38,0,0,0,DAT_2c4e4f40,0x4d,DAT_2c4e4f3c,0x1300,DAT_2c4e4f34,param_2);
  }
  return param_2;
}

