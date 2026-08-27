/* FUN_2c4eb990 @ 0x2c4eb990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb990(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStack_24 [3];
  int iStack_18;
  undefined4 uStack_14;
  
  piVar1 = _LAB_2c4ebaa0;
  uStack_14 = *_LAB_2c4eba9c;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x8b,_LAB_2c4ebab0,_LAB_2c4ebaac,_LAB_2c4ebacc);
  }
  if (1 < *(byte *)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    TRACE(1,0xfa,_LAB_2c4ebab0,_LAB_2c4ebaac,_LAB_2c4ebac4);
  }
  aiStack_24[0] = *_LAB_2c4ebaa0;
  if (aiStack_24[0] != 0) {
    FUN_2c644044(aiStack_24[0],0xffffffff);
    uVar3 = _LAB_2c4ebac0;
    if (param_2 < 6) {
      uVar3 = *(undefined4 *)(_LAB_2c4ebaa4 + param_2 * 4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x103,_LAB_2c4ebab0,_LAB_2c4ebaac,_LAB_2c4ebaa8,*param_1,uVar3);
  }
  aiStack_24[1] = 3;
  aiStack_24[2] = aiStack_24[0];
  iStack_18 = aiStack_24[0];
  iVar2 = FUN_2c643fdc(aiStack_24);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(1,0xc9,_LAB_2c4ebab0,_LAB_2c4ebaac,_LAB_2c4ebad0);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,199,_LAB_2c4ebab0,_LAB_2c4ebaac,_LAB_2c4ebac8);
}

