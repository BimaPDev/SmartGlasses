/* FUN_2c5b2434 @ 0x2c5b2434 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b2434(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  
  FUN_2c606d30(param_2,0);
  FUN_2c606d3c(param_2,0);
  FUN_2c606d18(param_2,0);
  FUN_2c606d24(param_2,0);
  FUN_2c606d9c(param_2,0);
  *(undefined4 *)(param_1 + 0x154) = param_2;
  FUN_2c5b394c(param_1 + 0x38,param_2);
  func_0x2c5b39b4(param_1 + 0x38);
  if ((param_3 == (char *)0x0) || (cVar1 = *param_3, cVar1 == '\0')) {
    iVar3 = FUN_2c5abf68();
    if ((*(int *)(iVar3 + 8) < 0) || (iVar3 = FUN_2c5abf68(), 2 < *(int *)(iVar3 + 8))) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5b26b4,0x56,_LAB_2c5b26b0,_LAB_2c5b26ac,_LAB_2c5b26a8);
    }
    iVar3 = FUN_2c5abf68();
    uVar9 = *(uint *)(iVar3 + 8);
    iVar3 = FUN_2c5abf68();
    iVar5 = (int)(char)uVar9;
    if (2 < (uVar9 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5b26b4,0xa2,_LAB_2c5b26c4,_LAB_2c5b26c0,_LAB_2c5b26a8,iVar5);
    }
    func_0x2c5b2360(param_1,iVar5,iVar3 + 0xc4);
    uVar4 = FUN_2c5af03c();
    iVar3 = FUN_2c5abf68();
    func_0x2c5af198(uVar4,*(undefined4 *)(iVar3 + 0x14));
    goto LAB_2c5b24b8;
  }
  uVar9 = FUN_2c66c4ec(param_3);
  piVar2 = _LAB_2c5b26c8;
  pcVar10 = *(char **)(param_1 + 0x168);
  if (pcVar10 != (char *)(param_1 + 0x170)) {
    uVar7 = *(uint *)(param_1 + 0x170);
    if (uVar9 <= uVar7) goto LAB_2c5b24ec;
    uVar8 = uVar7 * 2;
    if (uVar9 < uVar7 << 1) {
      if (-1 < (int)uVar8) goto LAB_2c5b25ce;
      iVar3 = -0x80000000;
      uVar8 = 0x7fffffff;
    }
    else {
LAB_2c5b256e:
      iVar3 = uVar9 + 1;
      uVar8 = uVar9;
    }
LAB_2c5b2572:
    if (*_LAB_2c5b26c8 == 0) {
      FUN_2c4723c4();
      *piVar2 = 1;
    }
    pcVar10 = (char *)FUN_2c47245c(0,iVar3);
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        *pcVar10 = *param_3;
      }
      else {
        FUN_2c674668(pcVar10,param_3,uVar9);
      }
    }
    if ((char *)(param_1 + 0x170) != *(char **)(param_1 + 0x168)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    *(char **)(param_1 + 0x168) = pcVar10;
    *(uint *)(param_1 + 0x170) = uVar8;
    goto LAB_2c5b2518;
  }
  if (0xf < uVar9) {
    if (0x1d < uVar9) goto LAB_2c5b256e;
    uVar8 = 0x1e;
LAB_2c5b25ce:
    iVar3 = uVar8 + 1;
    goto LAB_2c5b2572;
  }
LAB_2c5b24ec:
  if (param_3 < pcVar10) {
LAB_2c5b25ac:
    if (uVar9 != 0) {
      if (uVar9 == 1) goto LAB_2c5b25ee;
      FUN_2c674668(pcVar10,param_3,uVar9);
      pcVar10 = *(char **)(param_1 + 0x168);
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x16c);
    pcVar6 = pcVar10 + uVar8;
    if (pcVar6 < param_3) goto LAB_2c5b25ac;
    if (uVar9 != 0) {
      if (uVar9 <= uVar8) {
        if (uVar9 == 1) {
          *pcVar10 = cVar1;
          pcVar10 = *(char **)(param_1 + 0x168);
        }
        else {
LAB_2c5b250a:
          FUN_2c673eb8(pcVar10,param_3,uVar9);
          pcVar10 = *(char **)(param_1 + 0x168);
        }
        goto LAB_2c5b2518;
      }
      if (pcVar6 < param_3 + uVar9) {
        if (param_3 < pcVar6) {
          uVar8 = (int)pcVar6 - (int)param_3;
          if (uVar8 == 1) {
            *pcVar10 = cVar1;
          }
          else if (uVar8 != 0) {
            FUN_2c673eb8(pcVar10,param_3,uVar8);
          }
          if (uVar9 - uVar8 == 1) {
            pcVar10[uVar8] = pcVar10[uVar9];
            pcVar10 = *(char **)(param_1 + 0x168);
          }
          else {
            if (uVar9 != uVar8) {
              FUN_2c674668(pcVar10 + uVar8,pcVar10 + uVar9);
            }
            pcVar10 = *(char **)(param_1 + 0x168);
          }
        }
        else if (uVar9 == 1) {
          *pcVar10 = param_3[uVar9 - uVar8];
          pcVar10 = *(char **)(param_1 + 0x168);
        }
        else {
          FUN_2c674668(pcVar10,param_3 + (uVar9 - uVar8),uVar9);
          pcVar10 = *(char **)(param_1 + 0x168);
        }
        goto LAB_2c5b2518;
      }
      if (uVar9 != 1) goto LAB_2c5b250a;
LAB_2c5b25ee:
      *pcVar10 = cVar1;
      pcVar10 = *(char **)(param_1 + 0x168);
    }
  }
LAB_2c5b2518:
  *(uint *)(param_1 + 0x16c) = uVar9;
  uVar4 = _LAB_2c5b26bc;
  pcVar10[uVar9] = '\0';
  uVar4 = FUN_2c62bdd8(uVar4,0,param_1);
  FUN_2c62be70(uVar4,1);
LAB_2c5b24b8:
  uVar4 = FUN_2c620f0c(0xbbc,_LAB_2c5b26b8,param_1);
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  return;
}

