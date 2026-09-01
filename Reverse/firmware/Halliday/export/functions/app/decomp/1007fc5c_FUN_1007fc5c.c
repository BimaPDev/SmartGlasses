/* FUN_1007fc5c @ 0x1007fc5c */

int FUN_1007fc5c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  ushort uVar6;
  code *pcVar7;
  int iVar8;
  ushort local_3c [2];
  short local_38;
  short local_36;
  undefined4 local_34;
  char local_30;
  int local_2c;
  undefined4 local_27;
  undefined4 local_23;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  
  iVar8 = param_1[3];
  FUN_10121be4(param_1,&local_38,param_2,param_3);
  if (*(char *)(iVar8 + 0x10e8) != 'r') {
    if (*(char *)(iVar8 + 0x10e8) == 'w') {
      FUN_10121c28(param_1);
    }
    *(undefined1 *)(iVar8 + 0x10e8) = 0x72;
  }
  if (*(char *)(iVar8 + 0x10e9) != local_30) {
    iVar2 = FUN_10121a00(param_1);
    if (iVar2 != 1) {
      if (*(char *)(*param_1 + 0x10) == '\0') {
        return iVar2;
      }
      pcVar7 = *(code **)(*param_1 + 0xc);
      if (pcVar7 == (code *)0x0) {
        return iVar2;
      }
      uVar5 = 0x347;
      uVar3 = DAT_1007fe2c;
      goto LAB_1007fcbc;
    }
    *(char *)(iVar8 + 0x10e9) = local_30;
    *(undefined2 *)(iVar8 + 0x10ea) = 0xffff;
  }
  if (*(short *)(iVar8 + 0x10ea) == local_38) {
    if ((*(ushort *)(iVar8 + 0x10fa) & 0xfff) != 0xfff) goto LAB_1007fde8;
    *(undefined2 *)(iVar8 + 0x10fc) = 0xffff;
  }
  else {
    iVar2 = FUN_1007f98c(param_1,local_38,iVar8 + 0x10f8);
    if (iVar2 != 1) {
      return iVar2;
    }
    *(short *)(iVar8 + 0x10ea) = local_38;
    iVar2 = FUN_10121d3e(param_1,local_38,&local_2c);
    if (iVar2 == 1) {
      *(undefined2 *)(iVar8 + 0x10fa) =
           *(undefined2 *)(*(int *)(*(int *)(iVar8 + 0x74) + 0xc) + local_2c * 8 + 2);
      iVar2 = FUN_1012197a(param_1,local_38);
      if (iVar2 != 1) {
        if (*(char *)(*param_1 + 0x10) == '\0') {
          return iVar2;
        }
        pcVar7 = *(code **)(*param_1 + 0xc);
        if (pcVar7 == (code *)0x0) {
          return iVar2;
        }
        uVar5 = 0x36e;
        uVar3 = DAT_1007fe30;
LAB_1007fcbc:
        (*pcVar7)(uVar3,DAT_1007fe28,uVar5);
        return iVar2;
      }
LAB_1007fde8:
      iVar2 = FUN_10121d6e(param_1,local_36,local_3c,0x72);
      if (iVar2 == 1) {
        uVar6 = (ushort)(((uint)local_3c[0] << 0x14) >> 0x14);
      }
      else {
        uVar6 = 0xffff;
      }
    }
    else {
      uVar6 = 0xffff;
      *(undefined2 *)(iVar8 + 0x10fa) = 0xffff;
    }
    *(ushort *)(iVar8 + 0x10fc) = uVar6;
    uVar6 = *(ushort *)(iVar8 + 0x10fa);
    if (((uVar6 & 0xfff) != 0xfff) && (*(short *)(iVar8 + 0x10fc) != -1)) {
      uVar1 = **(undefined1 **)(iVar8 + 0x74);
      sVar4 = *(short *)(iVar8 + 0x10fc);
      goto LAB_1007fd78;
    }
  }
  uVar6 = *(ushort *)(iVar8 + 0x10f8);
  uVar1 = **(undefined1 **)(iVar8 + 0x74);
  sVar4 = local_36;
LAB_1007fd78:
  FUN_10120a74(param_1,&local_2c,uVar1,uVar6 & 0xfff,sVar4);
  local_27 = local_34;
  local_1f = 0;
  local_1e = 0;
  local_1d = 0;
  local_1c = 0;
  local_23 = param_4;
  iVar2 = FUN_1007e320(param_1,&local_2c);
  *(short *)(iVar8 + 0x10ec) = local_36;
  if ((*(ushort *)(iVar8 + 0x10fa) & 0xfff) != 0xfff) {
    FUN_10121554(param_1);
  }
  FUN_10121a18(param_1);
  return iVar2;
}

