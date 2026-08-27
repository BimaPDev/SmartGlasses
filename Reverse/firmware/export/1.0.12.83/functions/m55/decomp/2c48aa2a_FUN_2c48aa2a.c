/* FUN_2c48aa2a @ 0x2c48aa2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c48aa2a(undefined4 param_1,uint param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_4 != '\0') {
    FUN_2c674268(param_1,0,param_2);
  }
  pcVar1 = _LAB_2c48aabc;
  iVar2 = _LAB_2c48aab8;
  iVar4 = *_LAB_2c48aab4;
  iVar3 = iVar4 + 1;
  *_LAB_2c48aab4 = iVar3;
  uVar5 = iVar2 * iVar4 + _DAT_2c48aac0;
  if (_DAT_2c48aac0 < (uVar5 >> 1 | uVar5 * -0x80000000)) {
    iVar2 = FUN_2c48a9c4(param_1,param_2 & 0xffff);
    if (iVar2 == 0) {
      if (*pcVar1 == '\x02') {
        *pcVar1 = '\x01';
      }
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x163,_LAB_2c48aacc,_LAB_2c48aac8,_LAB_2c48aac4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x15d,_LAB_2c48aacc,_LAB_2c48aac8,_LAB_2c48aad0,iVar3,param_2,*pcVar1);
}

