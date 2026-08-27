/* FUN_2c588404 @ 0x2c588404 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c588404(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar2 = FUN_2c48e3b8();
  iVar3 = FUN_2c58cf34(uVar2,*(int *)(*param_2 + -0xc) + (int)param_2);
  piVar1 = _LAB_2c5884cc;
  if (iVar3 == 0) {
    if (*_LAB_2c5884cc == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar4 = (undefined4 *)FUN_2c47245c(0,0x34);
    FUN_2c674268(puVar4,0,0x34);
    uVar5 = _LAB_2c5884d0;
    *puVar4 = _LAB_2c5884d0;
    puVar4[1] = puVar4 + 3;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)(puVar4 + 9) = 0;
    puVar4[7] = puVar4 + 9;
    puVar7 = (undefined4 *)param_2[1];
    param_2[1] = (int)puVar4;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = uVar5;
      if ((undefined4 *)puVar7[7] != puVar7 + 9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if ((undefined4 *)puVar7[1] != puVar7 + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar7);
    }
    uVar5 = FUN_2c48e42c(uVar2,_LAB_2c5884d4);
    iVar6 = param_2[1];
    iVar3 = FUN_2c55700c(uVar5,_LAB_2c5884d8,iVar6 + 4,1);
    if ((-1 < iVar3) &&
       (iVar3 = FUN_2c55700c(uVar5,_LAB_2c5884dc,iVar6 + 0x1c,1), uVar5 = 0, -1 < iVar3))
    goto LAB_2c5884ae;
  }
  uVar5 = 0xffffffff;
LAB_2c5884ae:
  FUN_2c48dea0(uVar2);
  return uVar5;
}

