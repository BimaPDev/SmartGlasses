/* FUN_2c491c02 @ 0x2c491c02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c491c02(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  
  piVar1 = _LAB_2c491c74;
  if ((*param_4 != 0) && (*_LAB_2c491c70 != -1)) {
    FUN_2c674268(*_LAB_2c491c74,0,0xf2);
    *(undefined1 *)*piVar1 = 0;
    *(char *)(*piVar1 + 1) = (char)param_3;
    FUN_2c674668(*piVar1 + 2,param_2,param_3);
    FUN_2c5fddc4(3,_LAB_2c491c78,*piVar1,0xf2);
    *_LAB_2c491c7c = *_LAB_2c491c7c + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x63f,_LAB_2c491c8c,_LAB_2c491c88,_LAB_2c491c84,_LAB_2c491c80);
}

