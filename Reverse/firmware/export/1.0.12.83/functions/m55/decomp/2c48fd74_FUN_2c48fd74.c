/* FUN_2c48fd74 @ 0x2c48fd74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48fd74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x2c49372c(2);
  if (iVar1 == 0) {
    if (((*_LAB_2c48fddc < 0) || (0x14 < *_LAB_2c48fddc)) ||
       (*(char *)(_DAT_2c48fde0 + *_LAB_2c48fddc * 0x18 + 0xc) == '\0')) {
      FUN_2c674268(param_1,0,param_2,_LAB_2c48fddc,param_4);
    }
    else {
      iVar1 = _DAT_2c48fde0 + *_LAB_2c48fddc * 0x18;
      if (*(uint *)(iVar1 + 0x14) < *(uint *)(iVar1 + 8)) {
        FUN_2c48fcc8(*_LAB_2c48fddc,param_1,param_2);
      }
      else if (*_DAT_2c48fde4 != 0) {
        FUN_2c644100(*_DAT_2c48fde4,4);
      }
    }
  }
  return 0;
}

