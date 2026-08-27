/* FUN_2c480f3e @ 0x2c480f3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c480f3e(int param_1,int param_2)

{
  undefined4 uVar1;
  bool in_ZR;
  bool in_CY;
  
  uVar1 = _LAB_2c480f60;
  if (!in_CY || in_ZR) {
    uVar1 = *(undefined4 *)(_LAB_2c480f4c + param_2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x170,_LAB_2c480f58,_LAB_2c480f5c,_LAB_2c480f54,param_2,uVar1,param_1,
        *(undefined4 *)(_LAB_2c480f50 + param_1 * 4));
}

