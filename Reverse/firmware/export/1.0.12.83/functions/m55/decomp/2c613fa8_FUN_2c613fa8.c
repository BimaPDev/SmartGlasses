/* FUN_2c613fa8 @ 0x2c613fa8 */

bool FUN_2c613fa8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_2c614000;
  if (param_1 == 0) {
    return *DAT_2c614000 != 0;
  }
  iVar3 = 0;
  do {
    iVar2 = piVar1[iVar3 * 2];
    iVar3 = iVar3 + 1;
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 4) != '\x02') {
        return true;
      }
      if ((*(byte *)(iVar2 + 0x12) & 1) == 0) {
        iVar2 = FUN_2c62a998(param_1,iVar2 + 8);
      }
      else {
        iVar2 = FUN_2c62aa4c(param_1,iVar2 + 8,(int)*(short *)(iVar2 + 0x10));
      }
      if (iVar2 == 0) {
        return true;
      }
    }
    if (iVar3 == 0x10) {
      return false;
    }
  } while( true );
}

