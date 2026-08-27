/* FUN_2c568a7c @ 0x2c568a7c */

undefined4 FUN_2c568a7c(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar2 = FUN_2c48e3b8();
  iVar3 = FUN_2c58cf34(uVar2,*(int *)(*param_2 + -0xc) + (int)param_2);
  piVar1 = DAT_2c568b58;
  if (iVar3 == 0) {
    if (*DAT_2c568b58 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x68);
    FUN_2c674268(puVar4,0,0x68);
    uVar5 = DAT_2c568b5c;
    *puVar4 = DAT_2c568b5c;
    puVar4[7] = puVar4 + 9;
    puVar4[1] = puVar4 + 3;
    puVar4[0xd] = puVar4 + 0xf;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)(puVar4 + 9) = 0;
    *(undefined1 *)(puVar4 + 0xf) = 0;
    *(undefined1 *)(puVar4 + 0x15) = 0;
    puVar4[0x13] = puVar4 + 0x15;
    puVar6 = (undefined4 *)param_2[1];
    param_2[1] = (int)puVar4;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uVar5;
      if ((undefined4 *)puVar6[0x13] != puVar6 + 0x15) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if ((undefined4 *)puVar6[0xd] != puVar6 + 0xf) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)puVar6[7] != puVar6 + 9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if ((undefined4 *)puVar6[1] != puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar6);
    }
    uVar5 = FUN_2c48e42c(uVar2,DAT_2c568b60);
    iVar3 = FUN_2c5689f0(uVar5,param_2[1]);
    uVar5 = 0;
    if (iVar3 == 0) goto LAB_2c568b3c;
  }
  uVar5 = 0xffffffff;
LAB_2c568b3c:
  FUN_2c48dea0(uVar2);
  return uVar5;
}

