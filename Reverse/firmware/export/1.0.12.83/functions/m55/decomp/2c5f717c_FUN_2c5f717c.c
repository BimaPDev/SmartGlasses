/* FUN_2c5f717c @ 0x2c5f717c */

int FUN_2c5f717c(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar5 = param_1[1];
  iVar3 = param_2;
  if (param_2 < iVar5) {
    iVar4 = *param_1;
    cVar1 = *(char *)(iVar4 + param_2);
    if (cVar1 != '<') {
      uVar6 = 0;
      do {
        if (cVar1 == '\\') {
          if (iVar3 + 1 < iVar5) {
            iVar5 = FUN_2c5fb9b0((int)*(char *)(iVar4 + iVar3 + 1));
            if (iVar5 == 0) {
              iVar4 = *param_1;
              cVar1 = *(char *)(iVar4 + iVar3);
              goto LAB_2c5f719c;
            }
            iVar3 = iVar3 + 2;
            goto LAB_2c5f71b0;
          }
LAB_2c5f71c8:
          iVar5 = FUN_2c5fb998((int)cVar1);
          if (iVar5 != 0) {
            if (param_2 == iVar3) {
              return -1;
            }
            bVar7 = uVar6 != 0;
            iVar5 = param_1[1];
            goto LAB_2c5f724c;
          }
          iVar3 = iVar3 + 1;
          iVar5 = param_1[1];
          if (iVar5 <= iVar3) {
            return -1;
          }
        }
        else {
LAB_2c5f719c:
          if (cVar1 == '(') {
            uVar6 = uVar6 + 1;
            iVar3 = iVar3 + 1;
            if (0x20 < uVar6) {
              return -1;
            }
          }
          else {
            if (cVar1 != ')') goto LAB_2c5f71c8;
            if (uVar6 == 0) {
              if (param_1[1] <= iVar3) {
                return -1;
              }
              goto LAB_2c5f7258;
            }
            uVar6 = uVar6 - 1;
            iVar3 = iVar3 + 1;
          }
LAB_2c5f71b0:
          iVar5 = param_1[1];
          if (iVar5 <= iVar3) {
            return -1;
          }
        }
        iVar4 = *param_1;
        cVar1 = *(char *)(iVar4 + iVar3);
      } while( true );
    }
    iVar2 = param_2 + 1;
    iVar3 = iVar2;
    if (iVar2 < iVar5) {
      while (cVar1 = *(char *)(iVar4 + iVar3), cVar1 != '>') {
        if (cVar1 == '\\') {
          iVar3 = iVar3 + 2;
        }
        else {
          iVar3 = iVar3 + 1;
          if (cVar1 == '\n') {
            return -1;
          }
          if (cVar1 == '<') {
            return -1;
          }
        }
        if (iVar5 <= iVar3) {
          return -1;
        }
      }
      if (iVar3 + 1 < iVar5) {
        *param_3 = iVar2 + iVar4;
        param_3[1] = (iVar3 + -1) - param_2;
        return (iVar3 + 1) - param_2;
      }
    }
  }
  else {
    bVar7 = false;
LAB_2c5f724c:
    if ((iVar3 < iVar5) && (!bVar7)) {
      iVar4 = *param_1;
LAB_2c5f7258:
      *param_3 = iVar4 + param_2;
      param_3[1] = iVar3 - param_2;
      return iVar3 - param_2;
    }
  }
  return -1;
}

