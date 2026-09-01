/* FUN_10134454 @ 0x10134454 */

undefined1 FUN_10134454(undefined4 *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined2 local_2a;
  undefined2 auStack_28 [10];
  
  pcVar5 = (char *)*param_1;
  if (*pcVar5 != '\0') goto LAB_10134462;
  uVar3 = (uint)*(ushort *)(pcVar5 + 2);
  uVar4 = 0;
  local_2a = param_2;
  if (uVar3 == 0x2900) {
LAB_10134478:
    iVar1 = FUN_1011d5fa(param_3,&local_2a,2);
    if (iVar1 != 0) {
      local_2a = *(undefined2 *)(pcVar5 + 2);
      iVar1 = FUN_1011d5fa(param_3,&local_2a,2);
      if (iVar1 != 0) {
        iVar1 = (*(code *)param_1[1])(0,param_1,auStack_28,0x10,0);
        if (iVar1 < 0) {
          *(int *)(param_3 + 0x58) = iVar1;
          return 0;
        }
        puVar2 = auStack_28;
LAB_101344f4:
        iVar1 = FUN_1011d5fa(param_3,puVar2,iVar1);
        if (iVar1 != 0) goto LAB_10134462;
      }
    }
LAB_1013448a:
    *(undefined4 *)(param_3 + 0x58) = 0xffffffea;
  }
  else {
    if (uVar3 < 0x2901) {
      if (uVar3 - 0x2800 < 4) goto LAB_10134478;
    }
    else if ((uVar3 + 0xd6ff & 0xffff) < 5) {
      iVar1 = FUN_1011d5fa(param_3,&local_2a,2);
      if (iVar1 != 0) {
        local_2a = *(undefined2 *)(pcVar5 + 2);
        iVar1 = 2;
        puVar2 = &local_2a;
        goto LAB_101344f4;
      }
      goto LAB_1013448a;
    }
LAB_10134462:
    uVar4 = 1;
  }
  return uVar4;
}

