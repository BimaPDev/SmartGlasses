/* FUN_2c643e50 @ 0x2c643e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c643e50(char *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_1 != (char *)0x0) && (*param_1 == -0xb)) {
    if (param_1[0x18] != '\0') {
      iVar2 = *(int *)(param_1 + 0xc);
      uVar4 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = *(undefined4 *)(param_1 + 0x10);
        uVar4 = *(undefined4 *)(param_1 + 0x14);
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined4 *)(iVar2 + 0x2c) = uVar4;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = uVar4;
      }
      if (-1 < (int)((uint)(byte)param_1[3] << 0x1e)) goto LAB_2c643ebe;
      cVar3 = *(char *)(iVar2 + 0x21);
      for (iVar5 = *(int *)(iVar2 + 0x2c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
        if ((*(int *)(iVar5 + 8) != 0) &&
           (cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x20), cVar3 < cVar1)) {
          cVar3 = cVar1;
        }
      }
      if (*(char *)(iVar2 + 0x20) == cVar3) goto LAB_2c643ebe;
      *(char *)(iVar2 + 0x20) = cVar3;
      func_0x2c645b68();
      iVar2 = *(int *)(param_1 + 8);
      while (iVar2 != 0) {
        uVar4 = FUN_2c645b54(param_1);
        FUN_2c64621c(uVar4,0xfffffffd,0);
LAB_2c643ebe:
        iVar2 = *(int *)(param_1 + 8);
      }
      FUN_2c64610c(0);
    }
    *param_1 = '\0';
    if ((int)((uint)(byte)param_1[2] << 0x1f) < 0) {
      if (*(int *)(_LAB_2c643f14 + 0x94) == 0) {
        FUN_2c64447c(*(undefined4 *)(_LAB_2c643f14 + 0x80),param_1);
        func_0x2c643b38(param_1);
        return 0;
      }
      FUN_2c64749c();
    }
    func_0x2c643b38(param_1);
    return 0;
  }
  FUN_2c643b08(param_1,0xfffffffc);
  return 0xfffffffc;
}

