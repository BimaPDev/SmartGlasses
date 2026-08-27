/* FUN_1406e314 @ 0x1406e314 */

void FUN_1406e314(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  
  piVar3 = *(int **)(DAT_1406e39c + (param_1 + 6) * 4);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406e3a4,0x1f6,DAT_1406e3a0);
  }
  if (param_2 == 0) {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      bVar4 = *(byte *)((int)piVar3 + 0x1a);
      while( true ) {
        *(byte *)((int)piVar3 + 0x1a) = bVar4 | 1;
        (**(code **)(iVar2 + 4))(param_1,iVar2,param_3,param_4);
        bVar1 = *(byte *)((int)piVar3 + 0x1a);
        bVar4 = bVar1 & 0xfc;
        if ((bVar1 & 2) == 0) break;
        iVar2 = *piVar3;
        param_3 = 0;
        *(byte *)((int)piVar3 + 0x1a) = bVar4;
        if (iVar2 == 0) {
          return;
        }
        param_4 = 0;
      }
      *(byte *)((int)piVar3 + 0x1a) = bVar1 & 0xfe;
    }
  }
  else {
    iVar2 = FUN_1406e2c8(param_1,param_2);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1406e38a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 4))(param_1,iVar2,param_3,param_4);
      return;
    }
  }
  return;
}

