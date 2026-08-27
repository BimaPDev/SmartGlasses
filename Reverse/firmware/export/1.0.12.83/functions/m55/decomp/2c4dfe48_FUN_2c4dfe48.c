/* FUN_2c4dfe48 @ 0x2c4dfe48 */

int FUN_2c4dfe48(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 1;
  while( true ) {
    if (param_1[1] <= iVar1) {
      FUN_2c4e34f4(0xa2fd,0x85,1);
      iVar1 = *(int *)(DAT_2c4dfec8 + 8);
      FUN_2c4e0504(DAT_2c4dfecc,0,0,0,DAT_2c4dfed8,0x85,DAT_2c4dfed4,0x1300,DAT_2c4dfed0,param_2,
                   iVar1 + (param_2 & 0xff) * 8,iVar1 + ((param_2 & 0xffff) >> 8) * 8,
                   iVar1 + ((param_2 & 0xffffff) >> 0x10) * 8,iVar1 + (param_2 >> 0x18) * 8);
      return 0;
    }
    if (*(uint *)(*param_1 + iVar1 * 8) == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return *param_1 + iVar1 * 8;
}

