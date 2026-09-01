/* FUN_100cf5a4 @ 0x100cf5a4 */

int FUN_100cf5a4(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar4 = param_2;
  iVar8 = param_3;
  if ((**(char **)(param_2 + 8) == -0x2e) &&
     (puVar7 = param_1, iVar2 = FUN_10135f42(*(undefined4 *)*param_1), iVar2 != 0)) {
    FUN_100a5b78((DAT_100cf668 - DAT_100cf66c) * 0x20 & 0xff00U | 0xb80011,DAT_100cf674,DAT_100cf670
                 ,DAT_100cf66c,puVar7);
  }
  else {
    uVar3 = FUN_10132788(param_2 + 8);
    uVar1 = *(undefined2 *)(param_2 + 0xc);
    if (param_3 == 0) {
      iVar2 = FUN_10134e80(**(undefined1 **)(param_2 + 8));
      uVar5 = iVar2 - 1U & 0xff;
      if (uVar5 < 5) {
        param_3 = *(int *)(DAT_100cf678 + uVar5 * 4);
      }
    }
    param_1[0x4c] = param_3;
    FUN_100c1d1c(param_2);
    iVar2 = param_1[0x4c];
    uVar6 = DAT_100cf690;
    if (((iVar2 != DAT_100cf67c) && (uVar6 = DAT_100cf694, iVar2 != DAT_100cf680)) &&
       (uVar6 = DAT_100cf688, iVar2 != DAT_100cf684)) {
      uVar6 = DAT_100cf68c;
    }
    iVar4 = FUN_10134022(*(undefined4 *)*param_1,4,param_2,uVar6,param_1 + 2,iVar4,iVar8);
    iVar2 = 0;
    if (iVar4 != 0) {
      *(uint *)(param_2 + 8) = *(int *)(param_2 + 0x10) + (uVar3 & 0xffff);
      *(undefined2 *)(param_2 + 0xc) = uVar1;
      return iVar4;
    }
  }
  FUN_100c1c90(param_2);
  return iVar2;
}

