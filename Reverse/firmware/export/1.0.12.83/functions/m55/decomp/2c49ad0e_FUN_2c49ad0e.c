/* FUN_2c49ad0e @ 0x2c49ad0e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49ad0e(int *param_1,undefined4 param_2,int param_3)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x185,_LAB_2c49ae70,_LAB_2c49ae6c,_LAB_2c49ae78,_LAB_2c49ae64,param_2);
  }
  if ((param_3 != 0) && (*param_1 != _DAT_2c49ae60)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x18b,_LAB_2c49ae70,_LAB_2c49ae6c,_LAB_2c49ae7c,_LAB_2c49ae64,*param_1);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,400,_LAB_2c49ae70,_LAB_2c49ae6c,_LAB_2c49ae68,_LAB_2c49ae64,(short)param_1[4],
        *(undefined1 *)((int)param_1 + 0x12),param_1[5]);
}

