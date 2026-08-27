/* FUN_2c5485d2 @ 0x2c5485d2 */

/* WARNING: Removing unreachable block (ram,0x2c5486d0) */
/* WARNING: Removing unreachable block (ram,0x2c5486d4) */
/* WARNING: Removing unreachable block (ram,0x2c5486da) */
/* WARNING: Removing unreachable block (ram,0x2c5486e4) */
/* WARNING: Removing unreachable block (ram,0x2c5486ea) */
/* WARNING: Removing unreachable block (ram,0x2c5486ee) */
/* WARNING: Removing unreachable block (ram,0x2c5486fc) */
/* WARNING: Removing unreachable block (ram,0x2c548702) */
/* WARNING: Removing unreachable block (ram,0x2c54870c) */
/* WARNING: Removing unreachable block (ram,0x2c548712) */
/* WARNING: Removing unreachable block (ram,0x2c54871c) */
/* WARNING: Removing unreachable block (ram,0x2c548722) */
/* WARNING: Removing unreachable block (ram,0x2c54872a) */
/* WARNING: Removing unreachable block (ram,0x2c548734) */
/* WARNING: Removing unreachable block (ram,0x2c54873a) */
/* WARNING: Removing unreachable block (ram,0x2c548744) */
/* WARNING: Removing unreachable block (ram,0x2c54874a) */
/* WARNING: Removing unreachable block (ram,0x2c548754) */
/* WARNING: Removing unreachable block (ram,0x2c54875a) */
/* WARNING: Removing unreachable block (ram,0x2c548764) */
/* WARNING: Removing unreachable block (ram,0x2c54876a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5485d2(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint extraout_r12;
  
  piVar1 = _LAB_2c5487d4;
  if (*_LAB_2c5487d4 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = (undefined4 *)FUN_2c47245c(0,0x34);
  FUN_2c674268(puVar2,0,0x34);
  uVar4 = _LAB_2c5487bc;
  *puVar2 = _LAB_2c5487bc;
  puVar2[1] = puVar2 + 3;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[7] = puVar2 + 9;
  puVar5 = *(undefined4 **)(param_2 + 4);
  *(undefined4 **)(param_2 + 4) = puVar2;
  if (puVar5 == (undefined4 *)0x0) {
    if (*piVar1 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,0xbc);
    FUN_2c674268(puVar2,0,0xbc);
    uVar4 = _LAB_2c5487c0;
    puVar2[1] = puVar2 + 3;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[8] = puVar2 + 10;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[0xe] = puVar2 + 0x10;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    puVar2[0x14] = puVar2 + 0x16;
    *(undefined1 *)(puVar2 + 0x16) = 0;
    puVar2[0x1b] = puVar2 + 0x1d;
    *(undefined1 *)(puVar2 + 0x1d) = 0;
    puVar2[0x21] = puVar2 + 0x23;
    *(undefined1 *)(puVar2 + 0x23) = 0;
    *puVar2 = uVar4;
    *(undefined1 *)(puVar2 + 0x2b) = 0;
    puVar2[0x29] = puVar2 + 0x2b;
    puVar5 = *(undefined4 **)(param_2 + 8);
    *(undefined4 **)(param_2 + 8) = puVar2;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = uVar4;
      if ((undefined4 *)puVar5[0x29] == puVar5 + 0x2b) {
        *puVar5 = _LAB_2c5487c4;
                    /* WARNING: Could not recover jumptable at 0x2c5486cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (*(code *)(extraout_r12 | 0x40000001))();
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680();
    }
    uVar4 = FUN_2c48e42c(param_1,_LAB_2c5487cc);
    iVar3 = func_0x2c54890c(uVar4,*(undefined4 *)(param_2 + 8));
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    else {
      uVar4 = FUN_2c48e42c(param_1,_LAB_2c5487d0);
      iVar3 = func_0x2c58cd20(uVar4,*(undefined4 *)(param_2 + 4));
      iVar3 = iVar3 >> 0x1f;
    }
    return iVar3;
  }
  *puVar5 = uVar4;
  if ((undefined4 *)puVar5[7] != puVar5 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680();
  }
  if ((undefined4 *)puVar5[1] == puVar5 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

