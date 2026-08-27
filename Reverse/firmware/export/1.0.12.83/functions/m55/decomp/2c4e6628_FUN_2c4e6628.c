/* FUN_2c4e6628 @ 0x2c4e6628 */

/* WARNING: Possible PIC construction at 0x2c4e6658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c4e665c) */
/* WARNING: Removing unreachable block (ram,0x2c4e6544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e6628(int *param_1,int param_2,undefined4 param_3)

{
  if (*param_1 == 8000) {
    FUN_2c4e6544(param_1[2],param_2,param_1[1],0x3c);
    param_2 = param_1[1];
    register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
  }
  *(int *)((int)register0x00000054 + -4) = (int)(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x2c673b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_LAB_2c673b74)(*(int *)((int)register0x00000054 + -4),param_2,param_3,0);
  return;
}

